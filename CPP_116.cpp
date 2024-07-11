```c++
return vector<int>(pairs.begin(), pairs.end(), [](const auto& p) { return p.second; });