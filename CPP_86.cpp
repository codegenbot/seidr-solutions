for (char &c : s)
        if (c != ' ')
            c = tolower(c);
    int i, j;
    for (i = 0; i < s.length();)
    {
        if (s[i] != ' ')
        {
            j = i;
            while (j < s.length() && s[j] != ' ')
            {
                j++;
            }
            sort(s.begin() + i, s.begin() + j);
            i = j;
        }
        else
        {
            i++;
        }
    }
    return s;
}