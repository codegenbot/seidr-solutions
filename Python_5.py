def intersperse-separated-values(str_values: List[str], separator: str) -> List[str]:
    result = [str_values[0]]
    for i in range(1, len(str_values)):
        result.extend([result[-1], separator, str_values[i]])
    return result