int main 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<float> v1(n);
    vector<float> v2(n);

    cout << "Enter elements for vector 1: ";
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    cout << "Enter elements for vector 2: ";
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }

    double result = similarity(v1, v2);
    cout << "Similarity between the two vectors is: " << result << endl;
    return 0;
}