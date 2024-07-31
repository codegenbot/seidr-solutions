transform(s.begin(), s.end(), s.begin(), ::tolower);
int count = 0;
char last_char = s.back();
for (char ch : s) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || (ch == 'y' && ch == last_char)) {
        count++;
    }
}
return count;