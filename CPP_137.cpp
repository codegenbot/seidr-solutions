if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        if(a.type() == typeid(string) && b.type() == typeid(string)){
            string cleanA = boost::any_cast<string>(a);
            string cleanB = boost::any_cast<string>(b);
            cleanA.erase(std::remove(cleanA.begin(), cleanA.end(), ','), cleanA.end());
            cleanB.erase(std::remove(cleanB.begin(), cleanB.end(), ','), cleanB.end());
            if(stof(cleanA) > stof(cleanB)){
                return a;
            } else if(stof(cleanA) < stof(cleanB)){
                return b;
            }
        }
    }
    return "None";
}