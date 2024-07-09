vector<string> by_length(vector<int> arr){
    vector<int> v1;
    for(int i : arr){
        if(i >= 1 && i <= 9)
            v1.push_back(i);
    }
    sort(v1.begin(), v1.end());
    reverse(v1.begin(), v1.end());
    vector<string> v2;
    for(int i : v1){
        if(i == 1) v2.push_back("One");
        else if(i == 2) v2.push_back("Two");
        else if(i == 3) v2.push_back("Three");
        else if(i == 4) v2.push_back("Four");
        else if(i == 5) v2.push_back("Five");
        else if(i == 6) v2.push_back("Six");
        else if(i == 7) v2.push_back("Seven");
        else if(i == 8) v2.push_back("Eight");
        else if(i == 9) v2.push_back("Nine");
    }
    return v2;
}