def fix_spaces(text: str) -> str:
    return text.replace("  ", "-").replace(" ", "_")


fix_spaces("   Exa 1 2 2 mple")