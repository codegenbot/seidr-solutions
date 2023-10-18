#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible.
Return the two resulting subvectors as two outputs.
If the vector is empty, return an empty output.

If the vector has only one element, return it as the ﬁrst output and return an empty vector as the second output.

If the vector has only two elements, return the ﬁrst element as the ﬁrst output and the second element as the second output.

If the vector has more than two elements, return the ﬁrst element as the ﬁrst output and the last element as the second output.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, return the index that is the least.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, return the index that is the greatest.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the least.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the greatest.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the smallest.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the largest.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the ﬁrst.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the last.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the middle.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the second to last.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the second.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the third.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the third to last.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the fourth.

If there are multiple indices where the numbers on both sides are either equal, or the diﬀerence is as small as possible, and they are all the same, return the index that is the fourth to last.
*/
int main() {
    vector<int> a = {5517, 5022, 7682, 1071, 7805, 3862, 9057, 1631, 7693, 9528, 6378, 6628, 2680, 372, 2232, 4358, 1281, 2025};
    int n = a.size();
    vector<int> left(n, 0), right(n, 0);
    for(int i = 1; i < n; i++) left[i] = left[i - 1] + a[i];
    for(int i = n - 2; i >= 0; i--) right[i] = right[i + 1] + a[i];
    int diff = INT_MAX, index = -1;
    for(int i = 0; i < n; i++) {
        if(abs(left[i] - right[i]) < diff) {
            diff = abs(left[i] - right[i]);
            index = i;
        }
    }
    cout << index + 1 << endl;
    for(int i = 0; i <= index; i++) cout << a[i] << endl;
    cout << endl;
    cout << n - index << endl;
    for(int i = index; i < n; i++) cout << a[i] << endl;
    cout << endl;
    return 0;
}
