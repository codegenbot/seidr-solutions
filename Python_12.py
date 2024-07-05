def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    try:
        return max(strings, key=len)
    except (TypeError, AttributeError) as e:
        print(f"An error occurred: {e}")
        return None