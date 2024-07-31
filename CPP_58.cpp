```
int main() {
    int n; cin >> n;

    vector<vector<int>> v(n);

    for(int i=0; i<n; i++) {
        int m; cin >> m;

        v[i].resize(m);

        for(int j=0; j<m; j++) {
            cin >> v[i][j];
        }
    }

    if(v.size() > 1) {
        bool same = true;
        for(int i=2; i<v.size(); i++) {
            same &= issame(v[0], v[i]);
        }

        if(same) {
            vector<int> commonList;

            for(int i=0; i<v[0].size(); i++) {
                bool found = true;

                for(int j=1; j<v.size(); j++) {
                    if(find(v[j].begin(), v[j].end(), v[0][i]) == v[j].end()) {
                        found = false;
                        break;
                    }
                }

                if(found) {
                    commonList.push_back(v[0][i]);
                }
            }

            cout << "Common elements: ";
            for(int i=0; i<commonList.size(); i++) {
                cout << commonList[i] << " ";
            }
            cout << endl;
        } else {
            cout << "No common elements." << endl;
        }
    } 
    else { 
        cout << "At least two lists required to find common elements." << endl; 
    } 

    return 0;
}