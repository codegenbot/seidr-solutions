#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, target;
   cin >> n >> target;
   int arr[n];
   for(int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   vector<int> ans;
   for(int i = 0; i < n; i++) {
      if(arr[i] == target) {
         ans.push_back(i);
      }
   }
   for(int i = 0; i < ans.size(); i++) {
      cout << ans[i] << " ";
   }
   return 0;
}