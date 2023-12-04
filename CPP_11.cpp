The issue is caused by the fact that you are using an old version of C++ (C++11) and `std::string` has changed since then. In particular, the `_M_allocated_capacity` member was removed in C++14 and replaced with `_M_length`. You can fix this by updating your code to use the new member name:
```
return __ostream_insert(__os, __str.data(), __str._M_length());
```.