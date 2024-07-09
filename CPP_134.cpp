```cpp
bool check_if_last_char_is_a_letter(char str[]) {
    if(str != NULL && strlen(str) > 0)
        return isalpha(str[strlen(str)-1]);
    return false;
}

int start() {
    char str[100];
    gets(str);
    if(check_if_last_char_is_a_letter(str))
        printf("The last character of the string is a letter.\n");
    else
        printf("The last character of the string is not a letter.\n");
    return 0;
}

int main() {
    start();
}