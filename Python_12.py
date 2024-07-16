def longest(strings: List[str]) -> Optional[str]:
    return next(
        (s for s in strings if not strings or len(s) >= max(len(x) for x in strings)),
        None,
    )