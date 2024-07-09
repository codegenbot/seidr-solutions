```cpp
return result.empty() ? s.substr(0,s.size()) : std::accumulate(s.rbegin(), s.rend(), "", [&](char c){ return result + c; });