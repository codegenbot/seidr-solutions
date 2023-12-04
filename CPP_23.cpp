
int strlen(const std::string& str) {
    return str.length();
}
```
Or, if you want to keep the function signature as is, you can create a temporary `std::string` object and pass it to `strlen`:
```
assert (strlen(std::string("asdasnakj")) == 9);
```.