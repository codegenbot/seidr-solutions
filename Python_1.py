paren_string = input().strip()

if len(paren_string) % 2 == 0 and set(paren_string) == set("()"):
    output = separate_paren_groups(paren_string)
    print(output)