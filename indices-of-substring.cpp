int textLen = strlen(lowercaseText);
for (int i = 0; i <= textLen - targetLen + 1; ++i) {
...
lowercaseText[strlen(lowercaseText)] = '\0';