def separate_paren_groups(s: str) -> str:
    # Implement your logic here to separate parentheses groups
    return ""

test_cases = [input().strip() for _ in range(int(input("Enter number of test cases: ")))]
for test_case in test_cases:
    result = separate_paren_groups(test_case)
    print(result)