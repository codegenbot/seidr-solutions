import re


def fruit_distribution(s, n):
    s = re.sub(r"\b(apples|oranges)\b", "0", s.lower())
    return (
        sum(map(int, [int(x) for x in re.findall(r"\d+", s)]))
        if len([int(x) for x in re.findall(r"\d+", s)]) >= n
        else 0
    )


s = input()
n = int(input())
print(fruit_distribution(s, n))