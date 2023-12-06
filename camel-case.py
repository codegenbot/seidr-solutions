def convert_to_camel_case(string):
    return re.sub(r"-", "", string).title()