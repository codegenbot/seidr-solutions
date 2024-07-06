def longest(strings: List[str]) -> Optional[str]:
    return next(
        (
            s
            for s in strings
            if not strings[i + 1 :]
            or len(s)
            >= len(next(iter((t for t in strings[i + 1 :] if len(t) == len(s)))))
        ),
        None,
    )