vector<float> v;

cin >> v[0] >> v[1] >> v[2];

float max_value = *max_element(v.begin(), v.end());

return max_value;