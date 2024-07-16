vector<int> ans = {3};
    if(n == 0){
        return ans;
    }
    ans.push_back(1);
    for(int i = 2; i <= n; ++i){
        if(i % 2 == 0){
            ans.push_back(1 + i / 2);
        }
        else{
            ans.push_back(ans[i - 1] + ans[i - 2] + ans[i + 1]);
        }
    }
    return ans;
}