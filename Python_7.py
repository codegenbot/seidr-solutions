```
def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if not isinstance(substring, str):
        return "Error: Substring must be a string."
    try:
        return [s for s in strings if substring in s]
    except Exception as e:
        return f"An error occurred: {e}"