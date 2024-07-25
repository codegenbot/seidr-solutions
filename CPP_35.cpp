Here is the completed code:

```cpp
float max_element(vector<float> l){
    return *max_element(l.begin(), l.end());
}