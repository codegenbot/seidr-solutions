vector<float> v;

cin >> v[0];
for(int i = 1; i < l.size(); i++) {
    cin >> v[i];
}

return *max_element(v.begin(), v.end());