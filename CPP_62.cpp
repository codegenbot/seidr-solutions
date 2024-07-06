Here is the completed code:

```cpp
vector<float> derivative(vector<float> xs) {
    vector<float> res(1);
    for (int i = 1; i < xs.size(); i++) {
        res.push_back(i * xs[i]);
    }
    return res;
}