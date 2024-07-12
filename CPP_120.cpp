int mainProblemCPP120() {
    int arr[] = {1, 2, 3, -23, 243, -400, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::vector<int> vec(arr, arr + n); 
    assert (!issame(vec, std::vector<int>())); 
    return 0;
}