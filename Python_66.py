def digitSum(s):
    for i in range(len(s)):
        if s[i].isdigit():
            print(int(s[i]))