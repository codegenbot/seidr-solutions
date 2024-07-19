int main 
{
    vector<int> v1 = {1, 4, 3, 34, 653, 2, 5};
    vector<int> v2 = {5, 7, 1, 5, 9, 653, 121};

    vector<int> result = common(v1, v2);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}