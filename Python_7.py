def filter_by_substring(strings: list[str], substring: str) -> list[str]:
    if not isinstance(substring, str):
        return "Error: Substring must be a string."
    try:
        result = [s for s in strings if substring in s]
        return result
    except Exception as e:
        return f"An error occurred: {e}"