sort(l.begin(), l.end());
    int n = l.size();
    for(int i = 0; i < n - 2; i++){
        int j = i + 1;
        int k = n - 1;
        while(j < k){
            int sum = l[i] + l[j] + l[k];
            if(sum == 0){
                return true;
            } else if(sum < 0){
                j++;
            } else {
                k--;
            }
        }
    }
    return false;
}