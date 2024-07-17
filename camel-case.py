Here is the Python solution for the problem:

def camel_case(input_string):
    output = ""
    for word in input_string.split():
        if output:
            output += re.sub("(-|\s)", lambda m: m.group(0).upper(), word)
        else:
            output = re.sub("(-|\s)", lambda m: m.group(0).upper(), word)
    return output