vector<int> maximum(vector<int> arr,int k){
    vector<int> res(k);
    partial_sort(arr.begin(), arr.begin() + k, arr.end(),
                  [&res](int a, int b) {
                      for (int i = 0; i < k; ++i)
                          if (a > res[i])
                              return true;
                      return false;
                  });
    return res;
}