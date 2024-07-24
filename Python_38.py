return (
    (groups[0] + groups[-1][: -n + 1])
    if len(s) % n == 0
    else (groups[0][-1] + "".join(groups[1:]))
)