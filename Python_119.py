def match_parens(input_list):
    output = []
    for s in input_list:
        if s.startswith('"""') and s.endswith('"""'):
            output.append(s.replace('"""', ""))
        elif s.startswith("'''") and s.endswith("'''"):
            output.append(s.replace("'''", ""))
        else:
            output.append(s)
    return "\n".join(output)