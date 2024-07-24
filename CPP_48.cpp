string trimmed = "";
for (char c : text) {
    if (!ispunct(c)) {
        trimmed += tolower(c);
    }
}
return trimmed == istringstream(trimmed)->str();