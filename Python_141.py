```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    elif '.' not in file_name or file_name.split('.')[0].lstrip().isalnum() and file_name.count('.') != 1:
        return 'No'
    else:
        if file_name.split('.')[1][1:].lower() in ['txt', 'exe', 'dll']:
            return 'Yes'
        else:
            return 'No'