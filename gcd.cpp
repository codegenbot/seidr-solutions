```cpp
int minIndex = *std::min_element(indices.begin(), indices.end());
cout << "GCD of indices: " << gcd(minIndex, minIndex) << std::endl;