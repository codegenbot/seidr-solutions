def max_paren_count(paren_string):
    return [max([paren_string.count("(" * i) for i in range(1, 10)])]

result = max_paren_count(input())
print(result)