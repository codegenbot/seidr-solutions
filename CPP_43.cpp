```cpp
bool found = false;
for (int i = 0; i < l.size() && !found; i++) {
    for (int j = i + 1; j < l.size(); j++) {
        if (-l[i] == l[j]) {
            found = true;
            break;
        }
    }
}
return found;