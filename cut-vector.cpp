```cpp
int cutIndex = 0;
int minDiff = INT_MAX;

vector<int> v; 

cin >> v.size();
v.resize(v.size());
for(int i = 0; i < v.size(); i++) {
    cin >> v[i];
}

for(int i = 1; i < v.size(); i++) {
    int diff = abs(v[i] - v[i-1]);
    if(diff <= minDiff) {
        minDiff = diff;
        cutIndex = i;
    }
}

return {vector<int>(v.begin(), v.begin() + cutIndex)}, 
       {vector<int>(v.begin() + cutIndex, v.end())};