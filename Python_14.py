def solution(s):
    return [s[:i].lower() if s[i - 1].islower() else s[:i].upper() for i in range(1, len(s) + 1)]