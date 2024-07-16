def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []

    for c in paren_string:
        if c == " ":
            continue
        if c == "(":
            stack.append(c)
            groups.append("(")
        elif c == ")":
            while stack and stack[-1] != "(":
                groups.append(")")
                stack.pop()
            if not stack:
                result.append("".join(groups))
                groups = []

    if stack:
        for _ in range(len(stack)):
            groups.append(")")
            stack.pop()
        result.append("".join(groups))

    return [
        g
        for g in map(
            str,
            [
                "".join(g)
                for g in (groups[i].rjust(i) + "(" for i in range(len(result)))
            ],
        )
    ]