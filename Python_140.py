def fix_spaces(text):
    return '_'.join(['-']*2 if len(match.group()) > 2 else match.group() for match in re.finditer(r'\s{1,}', text)) if ' ' in text else text.replace(' ', '_')