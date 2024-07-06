int pos;
while ((pos = S.find("I", pos)) != string::npos) {
    if (S[pos] == 'I' && (S[pos + 1] == '.' || S[pos + 1] == '?' || S[pos + 1] == '!')) {
        count++;
    }
    pos = S.find("I", pos);
}