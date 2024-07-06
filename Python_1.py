def separate_paren_groups(result):
    return [group.replace("(", "").replace(")", "") for group in result]