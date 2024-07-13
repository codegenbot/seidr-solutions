int score(const string& bowling)
{
    int totalScore = 0;
    int frame = 1;
    
    for (int i = 0; i < bowling.size(); ++i)
    {
        if (frame > 10) break;
        
        if (bowling[i] == 'X')
        {
            totalScore += 10;
            if (frame < 10)
            {
                totalScore += (bowling[i + 1] == 'X') ? 10 : (bowling[i + 1] - '0');
                totalScore += (bowling[i + 2] == 'X') ? 10 : ((bowling[i + 2] == '/') ? 10 - (bowling[i + 1] - '0') : (bowling[i + 2] - '0'));
            }
            ++frame;
        }
        else if (bowling[i] == '/')
        {
            totalScore += 10 - (bowling[i - 1] - '0');
            totalScore += (bowling[i + 1] == 'X') ? 10 : (bowling[i + 1] - '0');
            ++i;
            ++frame;
        }
        else
        {
            totalScore += (bowling[i] - '0');
            if (frame < 10 && (bowling[i] - '0' + (i + 1 < bowling.size() ? (bowling[i + 1] - '0') : 0)) == 10)
            {
                totalScore += (bowling[i + 1] == 'X') ? 10 : (bowling[i + 1] - '0');
                ++i;
            }
            ++frame;
        }
    }
    
    return totalScore;
}

int main()
{
    string bowling;
    cin >> bowling;
    cout << score(bowling) << endl;
    return 0;
}