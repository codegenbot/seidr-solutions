def file_name_check(file_name):
    if len(re.findall(r'\d', file_name)) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    if not re.match(r'[a-zA-Z]', file_name):
        return 'No'
    if not re.search(r'\.(txt|exe|dll)$', file_name):
        return 'No'
    return 'Yes'