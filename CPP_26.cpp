#include<stdio.h>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> remove_duplicates(vector<int> numbers){
    unordered_map<int, int> count_map;
    for (int num : numbers) {
        count_map[num]++;
    }

    vector<int> result;
    for (int num : numbers) {
        if (count_map[num] == 1) {
            result.push_back(num);
        }
    }

    return result;
}