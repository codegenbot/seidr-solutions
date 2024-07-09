int* sort_third(vector<int> l) {
    int size = (l.size() + 2)/3 * 3; 
    int* result = new int[size]; 
    int i = 0;
    for (i = 0; i < l.size(); ) {
        if (i % 3 == 0 && i < l.size() - 2) {
            vector<int> temp;
            for (int j = i; j < min(i + 3, l.size()); j++) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            int k = 0;
            for (int t : temp) {
                result[i/3]++; 
                i++;
            }
        } else {
            result[i/3]++; 
            i++;
        }
    }
    for(int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    delete[] result;
    return result;
}