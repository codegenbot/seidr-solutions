for (char &ch : s)
    {
        if (isalpha(ch))
        {
            if (islower(ch))
                ch = toupper(ch);
            else
                ch = tolower(ch);
        }
    }

    if (count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0)
    {
        reverse(s.begin(), s.end());
    }

    return s;
}