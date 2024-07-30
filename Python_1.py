test_cases = [input().strip() for _ in range(int(input()))]
for test_case in test_cases:
    result = separate_paren_groups(test_case)
    print(result)